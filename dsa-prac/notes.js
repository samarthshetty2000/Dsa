let fs=require("fs")
var fileId = '1ZdR3L3qP4Bkq8noWLJHSr_iBau0DNT4Kli4SxNc2YEo';
var dest = fs.createWriteStream('/tmp/resume.pdf');
drive.files.export({
  fileId: fileId,
  mimeType: 'application/pdf'
})
    .on('end', function () {
      console.log('Done');
    })
    .on('error', function (err) {
      console.log('Error during download', err);
    })
    .pipe(dest);