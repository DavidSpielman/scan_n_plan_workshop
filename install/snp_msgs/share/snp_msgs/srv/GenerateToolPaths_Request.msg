# Request

# Mesh - the input to the path planning algorithm
string mesh_filename	# The surfaces on which to generate paths.

# Planning Parameters - configure the path planning - all in meters (m)
float64 line_spacing       # The desired space between path lines
float64 min_hole_size      # Holes less than this size should be ignored
float64 min_segment_length # How long a line needs to be to be included
float64 point_spacing      # The desired space between cartesian waypoints
float64 search_radius      # The radius used to compute normals

