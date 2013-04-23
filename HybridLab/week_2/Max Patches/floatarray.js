var notes = new Array();

function append(note)
{
	notes.push(note);
	notes.sort();
}

function kill(note)
{
	notes = notes.filter(function (item) {
		return item != note;
	});
}

function msg_float(fl)
{
	var idx = Math.floor(fl * notes.length);
	if (idx >= notes.length) idx = notes.length-1;
	if (idx < 0) idx = 0;
	if (notes.length > 0)
		outlet(0, notes[idx]);
}

function clear()
{
	notes = new Array();
}